BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,254,3,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H2A0200000_02_000");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝!
We did it!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("H2A0200000_02_010");
    MsgDisp("Sassa","Yeah.  I set a lot of new
personal bests. And Haba High won the
championship as a team!");
    MsgDisp("主人公","Yes, it was the best result we
could have gotten.
Congrats!");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("H2A0200000_02_020");
    MsgDisp("Sassa","Your support has always reassured
me. Even today, just seeing you in the
stands gave me confidence.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H2A0200000_02_030");
    MsgDisp("Sassa","We really want to thank you.
For being the best manager.");
    MsgDisp("主人公","｛颯砂＊＊｝......
It's me who should be thanking you.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    VoicePlay("H2A0200000_02_040");
    MsgDisp("Sassa","Come on, everyone's waiting.
Let's go!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(I'm glad that I stayed as
the track and field club manager......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
