MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("P740200002_02_000");
MsgDisp("Sassa","｛主人公｝, congratulations.");
MsgDisp("主人公","｛颯砂＊＊｝, 
were you watching?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P740200002_02_010");
MsgDisp("Sassa","Of course.
I couldn't take my eyes off you.
For a moment, the stage looked 
like a party venue.");
MsgDisp("主人公","Really?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P740200002_02_020");
MsgDisp("Sassa","Why doubt me?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P740200002_02_030");
MsgDisp("Sassa","It wasn't just me, 
The audience around me also said
you looked like a princess.");
MsgDisp("主人公","Yay, I'm happy.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("P740200002_02_040");
MsgDisp("Sassa","I'm glad. It would be a shame 
if it was only a one time thing, 
so wear it to the christmas party too!");
MsgDisp("主人公","(Yay, a huge success!
｛颯砂＊＊｝ praised me!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
