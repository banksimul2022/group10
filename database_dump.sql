-- MySQL dump 10.13  Distrib 8.0.28, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: pankkiautomaatti
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `asiakas`
--

DROP TABLE IF EXISTS `asiakas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas` (
  `idAsiakas` int NOT NULL AUTO_INCREMENT,
  `Nimi` varchar(45) NOT NULL,
  `Osoite` varchar(45) NOT NULL,
  `puhNum` varchar(45) NOT NULL,
  PRIMARY KEY (`idAsiakas`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
INSERT INTO `asiakas` VALUES (1,'Jussi Lappalainen','Lekatie 21','040123456'),(2,'Hannu Hanhi','Poratie 5','040234567'),(3,'Perttu Pihamaa','Poratie 33','0403456786'),(4,'Matti Nykänen','Lekatie 10','0404567891');
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `asiakas_has_tili`
--

DROP TABLE IF EXISTS `asiakas_has_tili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas_has_tili` (
  `idAsiakas` int NOT NULL,
  `idTili` int NOT NULL,
  PRIMARY KEY (`idAsiakas`,`idTili`),
  KEY `fk_Asiakas_has_Tili_Tili1_idx` (`idTili`),
  KEY `fk_Asiakas_has_Tili_Asiakas_idx` (`idAsiakas`),
  CONSTRAINT `fk_Asiakas_has_Tili_Asiakas` FOREIGN KEY (`idAsiakas`) REFERENCES `asiakas` (`idAsiakas`),
  CONSTRAINT `fk_Asiakas_has_Tili_Tili1` FOREIGN KEY (`idTili`) REFERENCES `tili` (`idTili`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas_has_tili`
--

LOCK TABLES `asiakas_has_tili` WRITE;
/*!40000 ALTER TABLE `asiakas_has_tili` DISABLE KEYS */;
/*!40000 ALTER TABLE `asiakas_has_tili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `kortti`
--

DROP TABLE IF EXISTS `kortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kortti` (
  `idKortti` int NOT NULL AUTO_INCREMENT,
  `KortinNumero` varchar(45) NOT NULL,
  `PIN` varchar(225) NOT NULL,
  `idAsiakas` int NOT NULL,
  `idTili` int NOT NULL,
  PRIMARY KEY (`idKortti`),
  KEY `fk_Kortti_Asiakas1_idx` (`idAsiakas`),
  KEY `fk_Kortti_Tili1_idx` (`idTili`),
  CONSTRAINT `fk_Kortti_Asiakas1` FOREIGN KEY (`idAsiakas`) REFERENCES `asiakas` (`idAsiakas`),
  CONSTRAINT `fk_Kortti_Tili1` FOREIGN KEY (`idTili`) REFERENCES `tili` (`idTili`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kortti`
--

LOCK TABLES `kortti` WRITE;
/*!40000 ALTER TABLE `kortti` DISABLE KEYS */;
INSERT INTO `kortti` VALUES (1,'999-999-999','$2a$10$P4VhFtWQ04bCEbqTlJRYdu84T5X74scKEY4zdsqVKf6yBb5gmgRvS',1,1),(2,'123-123-123','$2a$10$KYRruYFkVzeFlFjrZwuNXuZdzvmw4M5l/j8YGNbCTq9qJzW97bc5i',2,2);
/*!40000 ALTER TABLE `kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tili`
--

DROP TABLE IF EXISTS `tili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tili` (
  `idTili` int NOT NULL AUTO_INCREMENT,
  `Tilinumero` varchar(45) NOT NULL,
  `Saldo` int NOT NULL,
  PRIMARY KEY (`idTili`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tili`
--

LOCK TABLES `tili` WRITE;
/*!40000 ALTER TABLE `tili` DISABLE KEYS */;
INSERT INTO `tili` VALUES (1,'01234',2000),(2,'02345',2001),(3,'03456',2002),(4,'04567',2003);
/*!40000 ALTER TABLE `tili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `idTilitapahtumat` int NOT NULL AUTO_INCREMENT,
  `Tilinumero` varchar(45) NOT NULL,
  `KortinNumero` varchar(45) NOT NULL,
  `PVM` date NOT NULL,
  `Tapahtuma` varchar(45) NOT NULL,
  `Summa` int NOT NULL,
  `idKortti` int NOT NULL,
  `idTili` int NOT NULL,
  PRIMARY KEY (`idTilitapahtumat`),
  KEY `fk_Tilitapahtumat_Kortti1_idx` (`idKortti`),
  KEY `fk_Tilitapahtumat_Tili1_idx` (`idTili`),
  CONSTRAINT `fk_Tilitapahtumat_Kortti1` FOREIGN KEY (`idKortti`) REFERENCES `kortti` (`idKortti`),
  CONSTRAINT `fk_Tilitapahtumat_Tili1` FOREIGN KEY (`idTili`) REFERENCES `tili` (`idTili`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-12 13:17:53
