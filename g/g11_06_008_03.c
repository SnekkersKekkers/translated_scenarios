BGOpen("ar200",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,35,0,0,0,#1,#1,0,0);
VoiceEVSPlay(6);
VoicePlay("G110600803_06_000");
MsgDisp("Himuro","｛主人公｝.
Are you already finished for today?");
MsgDisp("主人公","Ah, good work today.
Yeah, ｛氷室＊＊｝ let's go together.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("G110600803_06_010");
MsgDisp("Himuro","Then, let's go.
As there's good waves.");
MsgDisp("主人公","Ah......hehe, yes!");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600803_06_020");
MsgDisp("Himuro","......Hey have you ever wanted flowers?");
MsgDisp("主人公","Mmm, I guess I would be happy if I
received them? ......Could it be that
you're planning on giving some to me?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600803_06_030");
MsgDisp("Himuro","Maybe if it's a practice bouquet I made.");
MsgDisp("主人公","Really? I would be happy.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600803_06_040");
MsgDisp("Himuro","Even if it was a failed attempt?");
MsgDisp("主人公","Yeah!");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600803_06_050");
MsgDisp("Himuro","Hmmm? Then, wait for a bit. I'll make you
the best failed attempt ever.");
MsgDisp("主人公","Best failed attempt?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,2);
VoicePlay("G110600803_06_060");
MsgDisp("Himuro","Yeah. The best bouquets get turned into
goods to sell. But, it would be offensive
to give a half-hearted one.");
MsgDisp("主人公","So, 
what would make it a failure?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
ChCheek(6,10);
VoicePlay("G110600803_06_070");
MsgDisp("Himuro","It's fine. If I think it's a failure, it's
a failure. That's all.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600803_06_080");
MsgDisp("Himuro","Well, I don't want you to expect failure, 
so forget what I asked you today.");
MsgDisp("主人公","Hehe, I got it!");
MsgDisp("主人公","(I'm looking forward to it......!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
