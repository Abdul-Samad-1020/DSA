-- --------------------------------------------------------
-- Clean & Normalized Voting DB SQL Schema
-- Author: Abdul Samad
-- Description: Fully normalized schema with relationships and documentation
-- --------------------------------------------------------

-- Set charset and time zone
SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";

-- --------------------------------------------------------
-- Table: roles
-- Description: Stores user roles (admin, voter, etc.)
-- --------------------------------------------------------
CREATE TABLE roles (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL UNIQUE
);

INSERT INTO roles (name) VALUES ('admin'), ('voter');

-- --------------------------------------------------------
-- Table: voters
-- Description: Registered users of the system
-- --------------------------------------------------------
CREATE TABLE voters (
    id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    email VARCHAR(100) NOT NULL UNIQUE,
    voter_id VARCHAR(50) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    role_id INT DEFAULT 2,
    registration_date TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP(),
    status ENUM('pending', 'verified', 'blocked') DEFAULT 'pending',
    FOREIGN KEY (role_id) REFERENCES roles(id)
);

-- --------------------------------------------------------
-- Table: elections
-- Description: Defines available elections
-- --------------------------------------------------------
CREATE TABLE elections (
    id INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(100) NOT NULL,
    description TEXT,
    start_date DATE NOT NULL,
    end_date DATE NOT NULL,
    status ENUM('pending','active','completed') DEFAULT 'pending',
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP()
);

-- --------------------------------------------------------
-- Table: parties
-- Description: Political or independent groups
-- --------------------------------------------------------
CREATE TABLE parties (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL UNIQUE
);

-- --------------------------------------------------------
-- Table: candidates
-- Description: People participating in elections
-- --------------------------------------------------------
CREATE TABLE candidates (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    election_id INT NOT NULL,
    party_id INT,
    bio TEXT,
    photo VARCHAR(255),
    FOREIGN KEY (election_id) REFERENCES elections(id) ON DELETE CASCADE,
    FOREIGN KEY (party_id) REFERENCES parties(id)
);

-- --------------------------------------------------------
-- Table: votes
-- Description: Votes cast by voters
-- --------------------------------------------------------
CREATE TABLE votes (
    id INT PRIMARY KEY AUTO_INCREMENT,
    voter_id INT NOT NULL,
    election_id INT NOT NULL,
    candidate_id INT NOT NULL,
    vote_date TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP(),
    UNIQUE KEY unique_vote (voter_id, election_id),
    FOREIGN KEY (voter_id) REFERENCES voters(id) ON DELETE CASCADE,
    FOREIGN KEY (election_id) REFERENCES elections(id) ON DELETE CASCADE,
    FOREIGN KEY (candidate_id) REFERENCES candidates(id) ON DELETE CASCADE
);

-- --------------------------------------------------------
-- Table: system_logs
-- Description: Logs system actions
-- --------------------------------------------------------
CREATE TABLE system_logs (
    id INT PRIMARY KEY AUTO_INCREMENT,
    action VARCHAR(255) NOT NULL,
    description TEXT,
    timestamp DATETIME DEFAULT CURRENT_TIMESTAMP()
);

-- --------------------------------------------------------
-- View: vote_results
-- Description: Summary of total votes per candidate per election
-- --------------------------------------------------------
CREATE VIEW vote_results AS
SELECT 
    e.title AS election_title,
    c.name AS candidate_name,
    COUNT(v.id) AS total_votes
FROM votes v
JOIN candidates c ON v.candidate_id = c.id
JOIN elections e ON v.election_id = e.id
GROUP BY v.election_id, v.candidate_id;

COMMIT;
