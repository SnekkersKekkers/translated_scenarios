switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,41,3,0,4,#1,#1,0,0);
    VoicePlay("H210000001_02_000");
    MsgDisp("Sassa","So you want to be the manager.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Yes, I'm looking forward to working with
you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("H210000001_02_010");
    MsgDisp("Sassa","I'll look forward to it too!");
    MsgDisp("主人公","(Alright!
Let's do our best to help everyone!)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_628");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,41,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H210000001_02_020");
    MsgDisp("Sassa","｛主人公｝, you're the manager?");
    MsgDisp("主人公","Yes, I'm looking forward to working with
you starting today.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("H210000001_02_030");
    MsgDisp("Sassa","Yeah, me too.
Somehow, I'm getting more motivated.
I'm going to go for another run.");
    SEPlay("EV_SE_672");
    BGMStop();
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(Hehe, ｛颯砂＊＊｝'s really getting into it.
Let's do our best so we can be of help to
everyone!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_628");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,41,4,0,0,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H210000001_02_040");
    MsgDisp("Sassa","｛主人公｝, you're the manager?");
    MsgDisp("主人公","Yes, I'm looking forward to working with
you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H210000001_02_050");
    MsgDisp("Sassa","Same here. But you know, with your sense,
I think you could be great in both short
and long distance.");
    MsgDisp("主人公","Thanks!
But, I'll be helping out as a manager to
support you and everyone else, ｛颯砂＊＊｝.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("H210000001_02_060");
    MsgDisp("Sassa","Oh, I see.
Got it.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("H210000001_02_070");
    MsgDisp("Sassa","With your support, I'll be able to do
anything!
Just watch me.");
    VoicePlay("H210000001_39_000");
    MsgDisp("Manager","Sassa, hurry up and go practice!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H210000001_02_080");
    MsgDisp("Sassa","Okay.
See you.
I gotta go!");
    MsgClose();
    SEPlay("EV_SE_672");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Hehe! Do your best, ｛颯砂＊＊｝. I'll be
supporting you with everything I have
starting today!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
