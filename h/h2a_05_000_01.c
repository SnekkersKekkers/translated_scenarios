BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_C",0.01);
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","｛柊＊＊＊｝, We couldn't take home the
championship......
It's so frustrating......");
    VoicePlay("H2A0500001_05_000");
    MsgDisp("Hiiragi","I see.");
    MsgDisp("主人公","But you know, a lot of members also set
new personal bests today.");
    ChMotion(5,4);
    Wait(12,0);
    ChEyeOpenLevel(5,0);
    VoicePlay("H2A0500001_05_010");
    MsgDisp("Hiiragi","Then this must be even more disappointing
to those players.");
    MsgDisp("主人公","Hm?");
    ChEye(5,0);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("H2A0500001_05_020");
    MsgDisp("Hiiragi","Personal bests are purely personal.
For their cherished manager, everyone must
have been aiming for the championship.");
    MsgDisp("主人公","｛柊＊＊＊｝......");
    ChEye(5,4);
    VoicePlay("H2A0500001_05_030");
    MsgDisp("Hiiragi","Please, continue this conversation with
the team members.
They are waiting over there.");
    MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝. We might have
lost, but I'm glad that I stayed as the
track and field club manager......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
