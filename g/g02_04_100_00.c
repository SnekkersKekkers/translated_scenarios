MsgClose();
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("G020410000_04_000");
MsgDisp("Nanatsumori","...It's beautiful.");
MsgDisp("主人公","Yeah, it is beautiful...");
ChMotion(4,2,1);
VoicePlay("G020410000_04_010");
MsgDisp("Nanatsumori","I don't want to go back to reality.");
MsgDisp("主人公","Hehe.
How come?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("G020410000_04_020");
MsgDisp("Nanatsumori","It's because...");
ChEye(4,0);
ChMouth(4,4);
VoicePlay("G020410000_04_030");
MsgDisp("Nanatsumori","Right now, I'm in this dream
world with no one else but you.");
VoicePlay("G020410000_04_040");
MsgDisp("Nanatsumori","I don't even care about who's around.
...Isn't that bad?");
MsgDisp("主人公","Bad?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020410000_04_050");
MsgDisp("Nanatsumori","Yeah, bad. I usually can't
do things like this.
And sooo...");
MsgClose();
ChClose(4,0,30);
SEPlay("EV_SE_FOOT_039");
ChLayout(0);
ChNanaType(-1);
ChOpen(4,255,0,4,3,-1,-1,0,0,0,60);
SEWait();
VoicePlay("G020410000_04_060");
MsgDisp("Nanatsumori","We'd just stare at each other's eyes.");
MsgDisp("主人公","(Woah...｛七ツ森＊｝ 's face is really
close!)");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("G020410000_04_070");
MsgDisp("Nanatsumori","...Something must be wrong with me.
This fluffy feeling inside must be
magic.");
ChEye(4,4);
ChEyeOpenLevel(4,10);
VoicePlay("G020410000_04_080");
MsgDisp("Nanatsumori","I can't take my eyes off you.");
MsgDisp("主人公","(｛七ツ森＊｝, you're being bolder than
usual∋ Now I'm nervous too...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
