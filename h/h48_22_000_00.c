switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H482200000_22_000");
    MsgDisp("Hikaru","So this day has finally arrived.");
    MsgDisp("主人公","｛ひかる＊｝. Yeah, it's finally
time......!");
    ChMotion(22,4,1);
    VoicePlay("H482200000_22_010");
    MsgDisp("Hikaru","Just keep performing as you always have
and you'll be fine! Right?");
    MsgDisp("主人公","Yeah!");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(22,4,1);
    VoicePlay("H482200000_22_020");
    MsgDisp("Hikaru","Hi～ Mari!
Are you ready?");
    MsgDisp("主人公","｛ひかる＊｝. Yeah, I'm fine.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H482200000_22_030");
    MsgDisp("Hikaru","Mari and Hikaru have been working so hard
in the rhythmic gymnastics club until now.
Let's definitely win!");
    MsgDisp("主人公","Yeah!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,2,1);
    VoicePlay("H482200000_22_040");
    MsgDisp("Hikaru","Haa...... my heart's starting to race♪");
    ChMotion(22,0,1);
    MsgDisp("主人公","(Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
