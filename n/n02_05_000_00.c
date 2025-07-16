ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020500000_05_000");
    MsgDisp("Hiiragi","Hello.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Are you also here to see the results?");
    ChMouth(5,4);
    VoicePlay("N020500000_05_010");
    MsgDisp("Hiiragi","Yes.");
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,5);
    VoicePlay("N020500000_05_020");
    MsgDisp("Hiiragi","First place...
You did fantastically.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("N020500000_05_030");
    MsgDisp("Hiiragi","Congratulations.
I have to work hard like you do.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Yeah!
I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,3,#1,#1,0,0);
    VoicePlay("N020500000_05_040");
    MsgDisp("Hiiragi","Since you got the top rank, I want you to
be my private tutor.");
    MsgDisp("主人公","Hehe...
As long as you don't mind tough study
sessions!");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("N020500000_05_050");
    MsgDisp("Hiiragi","I hope they are that way.");
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("N020500000_05_060");
    MsgDisp("Hiiragi","In any case, congratulations.
I really respect you since I don't think I
could ever reach that.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("N020500000_05_070");
    MsgDisp("Hiiragi","Usually, your greatness is hidden behind
your kindness, but this time you haven't
hidden it at all.");
    MsgDisp("主人公","(I'm glad I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,4,3,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("N020500000_05_080");
    MsgDisp("Hiiragi","｛主人公｝.
You got the first place, congratulations.");
    MsgDisp("主人公","｛柊＊＊＊｝!
Thank you!");
    ChEye(5,0);
    ChMotion(5,3);
    VoicePlay("N020500000_05_090");
    MsgDisp("Hiiragi","I will start paying more attention again.
I might be taking advantage of my
position.");
    MsgDisp("主人公","｛柊＊＊＊｝, you might be just
trying too hard.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("N020500000_05_100");
    MsgDisp("Hiiragi","Thank you. But it's not good at all. I
have to try harder. There's no doubt you
are shining brightly today.");
    MsgDisp("主人公","(｛柊＊＊＊｝, you must be very happy...
I'm glad I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
