BGMStop();
BGOpen("sc605",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","Tea and confectionaries for the guests are
ready. Ah, doesn't look like there's
enough maps for directions around the
school.)");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P830500000_05_000");
    MsgDisp("Hiiragi","Good work.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Have the guests arrived yet?");
    VoicePlay("P830500000_05_010");
    MsgDisp("Hiiragi","Some groups have arrived.
They're waiting in the reception room.");
    MsgDisp("主人公","I'm sorry.
I'll bring them tea and confectionaries
immediately.");
    ChEye(5,4);
    ChMotion(5,0,1);
    VoicePlay("P830500000_05_020");
    MsgDisp("Hiiragi","I'll go with you.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(Tea and confectionaries for the guests
are ready.
After that...");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P830500000_05_030");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝! I'm sorry to
keep you waiting. I've prepared the tea
and confectionaries for the guests.");
    ChEye(5,4);
    VoicePlay("P830500000_05_040");
    MsgDisp("Hiiragi","Yes.
Then I'll bring it to them.");
    MsgDisp("主人公","Eh?
But that's my job...");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("P830500000_05_050");
    MsgDisp("Hiiragi","It's alright. I'm acquainted with some
people present due to their relations with
the theatre troupe.");
    VoicePlay("P830500000_05_060");
    MsgDisp("Hiiragi","Please leave it to me.");
    MsgDisp("主人公","... Okay.
Then, please let me prepare the maps for
directions inside the school.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("P830500000_05_070");
    MsgDisp("Hiiragi","Calmly take your time.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
