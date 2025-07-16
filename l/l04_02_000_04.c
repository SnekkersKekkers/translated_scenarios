switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200004_02_000");
    MsgDisp("Sassa","Ooh, it's handmade.");
    MsgDisp("主人公","Yeah.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200004_02_010");
    MsgDisp("Sassa","You thought about my taste, and the
presentation is perfect.");
    MsgDisp("主人公","The taste is good too, you know?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("L040200004_02_020");
    MsgDisp("Sassa","Then I'll confirm the taste and eat it
slowly at home.
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(He seemed happy.
Thank goodness.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200004_02_030");
    MsgDisp("Sassa","Wow!
This is handmade, right?");
    MsgDisp("主人公","Yeah, I put some effort in.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200004_02_040");
    MsgDisp("Sassa","This took work, didn't it?
You thought about my tastes, too.
I'm super happy.");
    MsgDisp("主人公","Are you happy with it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200004_02_050");
    MsgDisp("Sassa","Yeah, of course.
I'm excited to eat it!
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(He seemed pleased.
Thank goodness.)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200004_02_060");
    MsgDisp("Sassa","Wow......
Is this handmade?
For me?");
    MsgDisp("主人公","Yeah, of course!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200004_02_070");
    MsgDisp("Sassa","Handmade things just feel special, right?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("L040200004_02_080");
    MsgDisp("Sassa","I like this kind of chocolate.
Thanks.");
    MsgDisp("主人公","Hehe, you're welcome.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("L040200004_02_090");
    MsgDisp("Sassa","Today, I'll carry it around to show off.");
    MsgDisp("主人公","What!?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200004_02_100");
    MsgDisp("Sassa","It'd be a waste to eat this right away.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(He seemed pleased.
Thank goodness.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
