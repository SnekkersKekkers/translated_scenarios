BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(There's still time before my afternoon
classes...Maybe I'll try going out to the
courtyard.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc200",0);
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("G110200300_02_000");
MsgDisp("Sassa","｛主人公｝.
You're here?");
MsgDisp("主人公","｛颯砂＊＊｝, you're running today too?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("G110200300_02_010");
MsgDisp("Sassa","Yeah, shall we take it easy today?");
MsgDisp("主人公","Okaaayy!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("ev002",0);
MsgClose();
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,1,1,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200300_02_020");
MsgDisp("Sassa","Yes, this is good.");
MsgDisp("主人公","Haa, haa...really?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200300_02_030");
MsgDisp("Sassa","Your posture is good, and your legs are
lifted.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200300_02_040");
MsgDisp("Sassa","When we stand in line like this, it
reminds me of the three-legged race.");
MsgDisp("主人公","Eh?
From the sports festival?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200300_02_050");
MsgDisp("Sassa","Right, left, right left...
Hey, let's do it together.");
MsgDisp("主人公","Ehh?
Right, left, right, left...");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200300_02_060");
MsgDisp("Sassa","Right, left, right, left...
Hahaha!");
MsgDisp("主人公","Hehe, I can't run anymore...!");
SEStop("EV_SE_FOOT_037",1.5);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("sc200",0);
MsgClose();
ChOpen(2,41,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200300_02_070");
MsgDisp("Sassa","I never expected I could do a three-legged
race with you again.");
MsgDisp("主人公","Running, right?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("G110200300_02_080");
MsgDisp("Sassa","I see.
Then, I'm going to run a little more.
See you.");
MsgClose();
BGMStop();
SEPlay("EV_SE_672");
MsgClose();
ChClose(2);
MsgDisp("主人公","(Phew...
That was a bit tiring, but I had a lot of
fun!)");
MsgClose();
ScrFadeOut(0,0);
