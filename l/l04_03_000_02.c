switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("L040300002_03_000");
    MsgDisp("Honda","Hm!?
Is it fine if I take this?");
    MsgDisp("主人公","Yes, go ahead.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300002_03_010");
    MsgDisp("Honda","I see. We don't get this often, so I'll
have with my sister. Thanks!");
    MsgDisp("主人公","(Was it too much...?)");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("L040300002_03_020");
    MsgDisp("Honda","This...is from that famous chocolatier!?");
    MsgDisp("主人公","You knew?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("L040300002_03_030");
    MsgDisp("Honda","It was on TV the other day.
I got curious about the true taste and
aroma of the cacao beans they mentioned.");
    MsgDisp("主人公","Hehe, that's good.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300002_03_040");
    MsgDisp("Honda","I'l savor it.
Thank you!");
    MsgDisp("主人公","(Thank goodness.
｛本多＊＊｝ seemed happy.)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("L040300002_03_050");
    MsgDisp("Honda","This store...
I heard people line up for it everyday!");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("L040300002_03_060");
    MsgDisp("Honda","Da, you didn't have to spend this much.");
    MsgDisp("主人公","Then, maybe I'll take it back?");
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("L040300002_03_070");
    MsgDisp("Honda","What!?
You can't!");
    MsgDisp("主人公","Hehe.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("L040300002_03_080");
    MsgDisp("Honda","Because I've been waiting this long for
you to give me chocolate, you know?
So, I'll eat it carefully.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300002_03_090");
    MsgDisp("Honda","Ah, of course, I'm not going to give my
sister any!");
    MsgDisp("主人公","(Hehe!
｛本多＊＊｝ seemed really happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
