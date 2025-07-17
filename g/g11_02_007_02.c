BGOpen("ex110",0);
ScrFadeIn(0);
VoicePlay("G110200702_34_000");
MsgDisp("Member A","Today we're practicing on the community
grounds. Everyone, let's do some training
that we can't do normally!");
VoicePlay("G110200702_44_000");
MsgDisp("Member B","Amazing, Haba High reserved all of this!");
MsgDisp("主人公","(Hehe, everyone's so excited, huh.)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,0,0,4,#1,#1,0,0);
VoicePlay("G110200702_02_000");
MsgDisp("Sassa","Apparently Mikage-sensei arranged it.
As expected of him.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
I see.
He's actually quite reliable, huh.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("G110200702_02_010");
MsgDisp("Sassa","Really. We don't get to practice javelin
throwing in the school courtyard often.
I'm happy.");
ChEye(2,0);
ChEyeOpenLevel(2,10);
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
ChOpen(2,100,1,1,0,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("G110200702_02_020");
MsgDisp("Sassa","｛主人公｝, let's run
together to cool down.");
MsgDisp("主人公","Yes.
How was it?
Did you have a good practice?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200702_02_030");
MsgDisp("Sassa","Of course.
Don't I look satisfied?");
MsgDisp("主人公","(There was a lot of throwing practice
today.
I wonder if his right arm is okay...?)");
while (1){
    RunEverydaySksp(2,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110200702_02_050");
    ChEye(2,1);
    ChMouth(2,0);
    ChMotion(2,0);
    MsgDisp("Sassa","I was born with curly hair.");
    }
VoicePlay("G110200702_02_040");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","My arm?
Maybe I threw a bit too much?");
VoicePlay("G110200702_02_060");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","I usually do a lot of cross step and
run-up training, so I got excited and
threw too much.");
MsgDisp("主人公","Will it be alright?");
VoicePlay("G110200702_02_070");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","Yes, I'm grateful to Mikage-sensei.
Ah, shall we go home together?");
MsgDisp("主人公","Yes!");
VoicePlay("G110200702_02_080");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","Then, let's run a little more.");
MsgClose();
SEStop("EV_SE_FOOT_037",2);
BGMStop();
MsgClose();
ChClose(2);
MsgDisp("主人公","(I'm glad... it looks like they were
able to train more carefree than usual.
I'm grateful to Mikage-sensei!)");
MsgClose();
ScrFadeOut(0,0);
