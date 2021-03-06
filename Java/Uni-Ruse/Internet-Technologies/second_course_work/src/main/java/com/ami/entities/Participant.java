package com.ami.entities;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class Participant {
	@Id
	@GeneratedValue
	private int id;
	
	private String name;
	private String competitionName;
	private String rankNumber;
	
	// Constructors
	public Participant() {}
	public Participant (String name, String competitionName, String rankNumber) {
		this.name = name;
		this.competitionName = competitionName;
		this.rankNumber = rankNumber;
	}
	
	// Getter methods
	public String getName() {
		return name;
	}
	public String getCompetitionName() {
		return competitionName;
	}
	public String getRankNumber() {
		return rankNumber;
	}
	
	// Setter methods
	public void setName(String name) {
		this.name = name;
	}
	public void setCompetitionName(String competitionName) {
		this.competitionName = competitionName;
	}
	public void setRankNumber(String rankNumber) {
		this.rankNumber = rankNumber;
	}
}
	

