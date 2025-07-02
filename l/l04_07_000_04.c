switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700004_07_000");
    MsgDisp("Mikage","Wow, handmade.
It's pretty elaborate, too.");
    MsgDisp("主人公","I wanted to show my gratitude.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700004_07_010");
    MsgDisp("Mikage","Ooh, then I'll accept those
feelings.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("L040700004_07_020");
    MsgDisp("Mikage","Thanks.");
    MsgDisp("主人公","(He seemed happy.
Thank goodness!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700004_07_030");
    MsgDisp("Mikage","It's handmade?");
    MsgDisp("主人公","Yes.
I wanted to show my gratitude.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700004_07_040");
    MsgDisp("Mikage","Then it's one of your
original works, huh.
I'll accept gratefully.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700004_07_050");
    MsgDisp("Mikage","Haha. When I look closely,
I can see your personality in
this chocolate. It's lovely. Thanks.");
    MsgDisp("主人公","(He seemed happy.
Thank goodness!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("L040700004_07_060");
    MsgDisp("Mikage","Ooh, you made it yourself!");
    MsgDisp("主人公","Yes, I did my best.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700004_07_070");
    MsgDisp("Mikage","Your hard work is really
showing through.");
    MsgDisp("主人公","There are some parts that
I couldn't do very well......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("L040700004_07_080");
    MsgDisp("Mikage","I don't see anything like that.
It's a diligent chocolate, just like you.
Thank you.");
    MsgDisp("主人公","(Thank goodness!
He seemed happy!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
