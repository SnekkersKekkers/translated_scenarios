BGOpen("tr500",0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030524000_05_000");
MsgDisp("Hiiragi","Even though we're close to the city, the
atmosphere is completely different.
Where are we going?");
MsgDisp("主人公","Uhm...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDispSksp(1,0);
ChEye(5,0);
ChMotion(5,0,1);
VoicePlay("B030524000_05_010");
MsgDisp("Hiiragi","Understood.
Shall we go then?");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
