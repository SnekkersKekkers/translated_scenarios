ChLayout(1);
MsgClose();
ScrFadeIn(0);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
switch (ChPrmGet(4,6)){
    case 3:
    VoicePlay("H380400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","｛七ツ森＊｝!
You came to cheer me on?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("H380400000_04_010");
    MsgDisp("Nanatsumori","Yeah.
Nice, your gi looks even better than usual
today.");
    MsgDisp("主人公","Hehe, it's because I'm all fired up.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H380400000_04_020");
    MsgDisp("Nanatsumori","Yeah.
I feel like you've already won.");
    MsgDisp("主人公","Thank you.
I'll do my best!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("H380400000_04_030");
    MsgDisp("Nanatsumori","Yeah, good luck.");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(4);
    VoicePlay("H380400000_04_040");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","｛七ツ森＊｝!
You came to cheer me on?");
    VoicePlay("H380400000_04_050");
    MsgDisp("Nanatsumori","Yeah.");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("H380400000_04_060");
    MsgDisp("Nanatsumori","I think you'll be fine, but...
Don't get hurt, okay?");
    MsgDisp("主人公","Yeah, thanks.");
    VoicePlay("H380400000_04_070");
    MsgDisp("Nanatsumori","Don't overdo it either, okay?");
    MsgDisp("主人公","Y-Yeah.
But, in order to win, I might need to,
just a little...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("H380400000_04_080");
    MsgDisp("Nanatsumori","Ah... yeah, I see.
Sorry, that was uncalled for.");
    MsgDisp("主人公","That's not true!
Thank you for worrying about me,
｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H380400000_04_090");
    MsgDisp("Nanatsumori","Yeah. I'll be cheering for you with
everything I have. ...In my heart.");
    MsgDisp("主人公","(｛七ツ森＊｝...
Alright, I have to do my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
