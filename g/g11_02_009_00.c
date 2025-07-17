BGOpen("sc601",0);
ScrFadeIn(0);
MsgDisp("主人公","(Before we knew it, it was almost time for
the Inter-High.
I hope everyone does their best...)");
VoicePlay("G110200900_34_000");
MsgDisp("Member","The tournament is coming up soon, so
players should take good care of
themselves～");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
BGOpen("ev002",0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,0,1,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("G110200900_02_000");
MsgDisp("Sassa","｛主人公｝, thanks for
always accompanying me on my last run like
this.");
MsgDisp("主人公","Yeah, it was tough to begin with, but I
wonder if it's better now that I trained.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200900_02_010");
MsgDisp("Sassa","Yeah, seems like you could be an athlete.");
MsgDisp("主人公","(Huh?
｛颯砂＊＊｝, it seems like your
arms are stiffer than usual today...?)");
while (1){
    RunEverydaySksp(2,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110200900_02_030");
    ChEye(2,1);
    ChMouth(2,1);
    ChMotion(2,1);
    ChEyeOpenLevel(2,7);
    MsgDisp("Sassa","What?
What's wrong all of a sudden?");
    }
VoicePlay("G110200900_02_020");
ChEye(2,1);
ChMouth(2,1);
ChMotion(2,2);
MsgDisp("Sassa","My arm?
Ah, maybe I put in a bit more force than
usual.");
VoicePlay("G110200900_02_040");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","Yes, thank you.
I didn't even notice my muscles were
tense.");
MsgDisp("主人公","No, no.
It just looked a little different than
usual.");
VoicePlay("G110200900_02_050");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","You always look out for me, so you
noticed.");
VoicePlay("G110200900_02_060");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","Such small deviations can lead to big
mistakes.
Thank you.");
MsgDisp("主人公","Yeah, I'm glad I was of help.");
VoicePlay("G110200900_02_070");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","Today I'm going to relax and loosen up my
muscles. I almost ended up regretting it,
before the real thing.");
MsgDisp("主人公","(It's already the interhigh...
Let's cheer for ｛颯砂＊＊｝ so
he can finish satisfied!)");
MsgClose();
BGMStop();
SEStop("EV_SE_FOOT_037",1.5);
MsgClose();
ScrFadeOut(0,0);
ChClose(2);
