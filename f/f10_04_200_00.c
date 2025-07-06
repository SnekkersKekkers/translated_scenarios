BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Ah.
Over there is——");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,254,0,1,0,-1,-1,0,0,0,60);
VoicePlay("F100420000_04_000");
MsgDisp("Nanatsumori","…………");
MsgDisp("主人公","｛七ツ森＊｝.
What are you looking at?");
VoicePlay("F100420000_04_010");
MsgDisp("Nanatsumori","Himuro-kun.");
MsgDisp("主人公","Umm... you mean Himuro Inori-kun?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F100420000_04_020");
MsgDisp("Nanatsumori","There is no way I would 
stare at Vice Principal Himuro.");
MsgDisp("主人公","Y-Yeah.
Why are you staring at ｛氷室＊＊｝?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100420000_04_030");
MsgDisp("Nanatsumori","Hm.
I thought he had potential.");
MsgDisp("主人公","Potential?");
ChPosition(4,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,2,1,0,0,-1,0,2,0,60);
VoicePlay("F100420000_06_000");
MsgDisp("Himuro","What was up with you just now?");
MsgDisp("主人公","Ah...｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F100420000_06_010");
MsgDisp("Himuro","If you've got something you want
to say, spit it out already.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("F100420000_04_040");
MsgDisp("Nanatsumori","Himuro-kun.
...Guriguri?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100420000_06_020");
MsgDisp("Himuro","I play it.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100420000_04_050");
MsgDisp("Nanatsumori","Alright.
I'll summon you under the name of 
NA at 8 o'clock tonight, so come.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("F100420000_06_030");
MsgDisp("Himuro","Well, that's fine.
I'll go to the guild 
at 8 o'clock then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6,0,30);
ChPosition(4,0);
ChEye(4,1);
ChMouth(4,3);
VoicePlay("F100420000_04_060");
MsgDisp("Nanatsumori","As I thought.
My intuition is sharp.");
MsgDisp("主人公","(Guriguri? An invite? What are 
they even talking about?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
