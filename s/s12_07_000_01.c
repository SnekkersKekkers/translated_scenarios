switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.
Are you going to the school now?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700001_07_000");
    MsgDisp("Mikage","Yeah, to the plants in the Gardening 
Club, New Years doesn't matter.");
    MsgDisp("主人公","I see. Sorry I can't help.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("S120700001_07_010");
    MsgDisp("Mikage","What are you saying?
It wouldn't be a good New Years without
saying hello to the flowers and plants.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700001_07_020");
    MsgDisp("Mikage","You must be tired. Rest well.
See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(I visited the shrine with
｛御影＊＊｝. It's going to be a great
year!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you so much for taking me.
｛御影＊＊｝, do you have to go to
school now?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700001_07_030");
    MsgDisp("Mikage","Ahh.
They call me in, but I don't have
much to do.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700001_07_040");
    MsgDisp("Mikage","In any case, I'm concerned about
how the plants there are doing.
So it's fine.");
    MsgDisp("主人公","I'm sorry I can't help.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700001_07_050");
    MsgDisp("Mikage","What are you talking about?
I had a fun New Years thanks to you.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700001_07_060");
    MsgDisp("Mikage","I actually wanted to give you a
New Year's gift. But after thinking
about it, it would be smarter not to.");
    MsgDisp("主人公","Ehh?
Really......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700001_07_070");
    MsgDisp("Mikage","Yep.");
    MsgDisp("主人公","Hehe, okay.
I look forward to working with you
this year.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700001_07_080");
    MsgDisp("Mikage","See you later.
I'm leaving.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(Hehe, it was fun visiting the
shrine together. 
This year will be a good one!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
