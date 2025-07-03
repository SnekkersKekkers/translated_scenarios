BGOpen("ar200",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝ good work today.
Are you already finished for the day?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,35,0,0,4,-1,-1,0,0);
VoicePlay("G110600800_06_000");
MsgDisp("Himuro","Yeah, I'm stopping by the beach on my way
home. Looks like there's some good waves
coming.");
MsgDisp("主人公","Wow, that's great!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("G110600800_06_010");
MsgDisp("Himuro","I'm guessing you're also done?
If you want to come, then come?");
MsgDisp("主人公","Yay!");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev006",1);
BGMVol(0.5,2);
ChOpen(6,100,0,0,1,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110600800_06_020");
MsgDisp("Himuro","You're working pretty hard aren't you?");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600800_06_030");
MsgDisp("Himuro","The part time job. To be honest, I thought
you'd quit pretty soon.");
MsgDisp("主人公","I won't quit though?
After all, it's fun!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600800_06_040");
MsgDisp("Himuro","......Ah, right.");
MsgDisp("主人公","I want to be able to do more things.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600800_06_050");
MsgDisp("Himuro","That's dependent on your efforts.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600800_06_060");
MsgDisp("Himuro","......Well, if you keep this up, I don't
think there's anything to worry about.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600800_06_070");
MsgDisp("Himuro","Well, if you're able to do more things, I
think it'll be more worthwhile and
interesting.");
MsgDisp("主人公","Yes, that's right.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600800_06_080");
MsgDisp("Himuro","Well, show me how hard you can try.");
MsgDisp("主人公","(Then, let's give it our all!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
