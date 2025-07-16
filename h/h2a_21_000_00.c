switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ChLayout(1);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H2A2100000_21_000");
    MsgDisp("Michiru","Mari, congratulations!");
    MsgDisp("主人公","｛みちる＊｝!
It's because everyone did their best!");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H2A2100000_21_010");
    MsgDisp("Michiru","You too, as manager, right?
It was really wonderful.");
    MsgDisp("主人公","(I'm glad that I stayed as the track and
field club manager!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    Wait(15,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H2A2100000_21_020");
    MsgDisp("Michiru","Amazing, you won!");
    MsgDisp("主人公","Thanks!
It's thanks to your support,
｛みちる＊｝.");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H2A2100000_21_030");
    MsgDisp("Michiru","Hehe.
I was cheering for you though, Mari.");
    MsgDisp("主人公","Hehe, thanks!");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("H2A2100000_21_040");
    MsgDisp("Michiru","Mari's here, and a lot of great members
are here. It really is a great team.
Really, congratulations on winning.");
    MsgDisp("主人公","(｛みちる＊｝......
I'm glad that I stayed as the track and
field club manager!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
