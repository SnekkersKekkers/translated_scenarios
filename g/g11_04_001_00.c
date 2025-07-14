BGOpen("sc000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, this month's feature of Habatcher is on
limited time sweets.)");
MsgDisp("主人公","Hehe! I'm gonna try to eat some
by myself.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","The only available seats are...
Huh?");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110400100_04_000");
MsgDisp("Nanatsumori","Ah...");
MsgDisp("主人公","｛七ツ森＊｝. Are you working today?");
VoicePlay("G110400100_04_010");
MsgDisp("Nanatsumori","Yeah. I'm on break right now. What are you
doing here?");
MsgDisp("主人公","I'm looking for some limited time sweets
that were on Habatcher this month▼");
ChEye(4,2);
VoicePlay("G110400100_04_020");
MsgDisp("Nanatsumori","I see...");
VoicePlay("G110400100_04_030");
MsgDisp("Nanatsumori","We don't have any more, but do you wanna
hear my review on it?");
MsgDisp("主人公","Huh? Could it be that you already,
｛七ツ森＊｝...");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400100_04_040");
MsgDisp("Nanatsumori","Yeah, it was delicious.");
MsgDisp("主人公","Incredible...");
ChMouth(4,0);
ChMotion(4,1);
VoicePlay("G110400100_04_060");
MsgDisp("Nanatsumori","You're welcome to sit with me if you'd
like.");
MsgDisp("主人公","Sure!
In that case...");
MsgDisp("主人公","Excuse me!
A \"Seasonal All Fruit Tart\" please!");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400100_04_070");
MsgDisp("Nanatsumori","No problem.
I look forward to your review then.");
MsgDisp("主人公","(Huh, a review? In any case, that's
impressive, ｛七ツ森＊｝. You got here
fast...!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
