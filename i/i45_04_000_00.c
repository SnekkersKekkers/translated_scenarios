BGOpen("ar200",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I450400000_04_000");
    MsgDisp("Nanatsumori","......Ah.");
    MsgDisp("主人公","Welcome! What kind of flower would you
like?");
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("I450400000_04_010");
    MsgDisp("Nanatsumori","Nah, that's not it.");
    MsgDisp("主人公","?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("I450400000_04_020");
    MsgDisp("Nanatsumori","I already saw you.");
    MsgDisp("主人公","I, I see.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I450400000_04_030");
    MsgDisp("Nanatsumori","Flowers really do suit girls.
Well, work hard.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(Um...... ｛七ツ森＊｝, did you come to
check on me?)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I450400000_04_040");
    MsgDisp("Nanatsumori","Good work.");
    MsgDisp("主人公","Ah, welcome! ｛七ツ森＊｝.");
    ChMotion(4,0,1);
    VoicePlay("I450400000_04_050");
    MsgDisp("Nanatsumori","Whatcha doin'?");
    MsgDisp("主人公","Working part-time at the flower-");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I450400000_04_060");
    MsgDisp("Nanatsumori","I got that much.
Hey, on that plate you just put down.
Did you draw that?");
    MsgDisp("主人公","Yeah, that's right.
I tried to design it so it wouldn't
overshadow the main flower arrangement.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I450400000_04_070");
    MsgDisp("Nanatsumori","It's good.
My eyes went to the flower arrangement,
then naturally went to the plate.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I450400000_04_080");
    MsgDisp("Nanatsumori","The color and presentation is good, too.
This could just be sold as is.
You're really into this, huh?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(｛七ツ森＊｝ came to check on me,
right?
I'm happy I got complimented!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("I450400000_04_090");
    MsgDisp("Nanatsumori","｛主人公｝. Good work.");
    MsgDisp("主人公","Ah...... you too, ｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("I450400000_04_100");
    MsgDisp("Nanatsumori","......Smells nice.");
    MsgDisp("主人公","Really? Ah, I was organizing the potpourri
earlier. Maybe that's why?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I450400000_04_110");
    MsgDisp("Nanatsumori","Hm. But, maybe there's something
else......");
    MsgClose();
    SEPlay("EV_SE_FOOT_039");
    ChClose(4,0,30);
    ChLayout(0);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,0,0,0,0,0,60);
    SEWait();
    VoicePlay("I450400000_04_120");
    MsgDisp("Nanatsumori","............");
    MsgDisp("主人公","Um, ｛七ツ森＊｝, you're a little
close......");
    MsgClose();
    ChEye(4,5);
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    ChClose(4,0,30);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,5,4,#1,#1,8,0,0,60);
    SEWait();
    VoicePlay("I450400000_04_130");
    MsgDisp("Nanatsumori","Sorr-
It's, I'm really sorry!");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I450400000_04_140");
    MsgDisp("Nanatsumori","I'll get going.
Work hard, 'kay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    VoicePlay("I450400000_04_150");
    MsgDisp("Nanatsumori","Damn...... The good smell was from her,
herself......");
    MsgDisp("主人公","(Haa, that surprised me......
｛七ツ森＊｝ came to cheer me on,
right?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
