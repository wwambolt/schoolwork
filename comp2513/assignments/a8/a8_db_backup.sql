-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.5.24-log


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

--
-- Create schema db
--

CREATE DATABASE IF NOT EXISTS a8db;
USE a8db;

--
-- Definition of table `patient_info`
--

DROP TABLE IF EXISTS `patient_info`;
CREATE TABLE `patient_info` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `firstname` varchar(45) NOT NULL,
  `lastname` varchar(45) NOT NULL,
  `address` varchar(45) NOT NULL,
  `phonenum` varchar(12) NOT NULL,
  `healthcardnum` varchar(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `patient_info`
--

/*!40000 ALTER TABLE `patient_info` DISABLE KEYS */;
INSERT INTO `patient_info` (`id`,`firstname`,`lastname`,`address`,`phonenum`,`healthcardnum`) VALUES 
 (1,'William','Wambolt','803 Hwy 1 Mt. Denson','902-684-3864','111 111 111');
/*!40000 ALTER TABLE `patient_info` ENABLE KEYS */;


--
-- Definition of table `employee_info`
--

DROP TABLE IF EXISTS `employee_info`;
CREATE TABLE `employee_info` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `firstname` varchar(45) NOT NULL,
  `lastname` varchar(45) NOT NULL,
  `address` varchar(45) NOT NULL,
  `phonenum` varchar(12) NOT NULL,
  `payrate` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `employee_info`
--

/*!40000 ALTER TABLE `employee_info` DISABLE KEYS */;
INSERT INTO `employee_info` (`id`,`firstname`,`lastname`,`address`,`phonenum`,`payrate`) VALUES 
 (1,'William','Wambolt','803 Hwy 1 Mt. Denson','902-684-3864','60');
/*!40000 ALTER TABLE `employee_info` ENABLE KEYS */;

--
-- Definition of table `appointment_info`
--

DROP TABLE IF EXISTS `appointment_info`;
CREATE TABLE `appointment_info` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `curr_dt` varchar(45) NOT NULL,
  `patid` int(10) NOT NULL,
  `physid` int(10) NOT NULL,
  `treatment` varchar(12) NOT NULL,
  `appt_dt` varchar(45) NOT NULL,
  `appt_dur` float(10) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `appointment_info`
--

/*!40000 ALTER TABLE `appointment_info` DISABLE KEYS */;
INSERT INTO `appointment_info` (`id`,`curr_dt`,`patid`,`physid`,`treatment`,`appt_dt`,`appt_dur`) VALUES 
 (1,'date','id1','id2','type','date2','duration');
/*!40000 ALTER TABLE `appointment_info` ENABLE KEYS */;


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
