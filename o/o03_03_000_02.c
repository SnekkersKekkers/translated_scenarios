BGMPlay("BGM_SPORTS_DAY");
BGOpen("sc760",0);
MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("O030300002_03_000");
    MsgDisp("Honda","Ahaha......
Well, I guess that's what happens when the
teams are made last-minute.");
    MsgDisp("主人公","(Last, huh......
We weren't in sync at all......)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    ChEyeOpenLevel(3,0);
    VoicePlay("O030300002_03_010");
    MsgDisp("Honda","Yeah, I had fun.");
    MsgDisp("主人公","Y-Yeah......
But it's still frustrating.");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O030300002_03_020");
    MsgDisp("Honda","You said it? I didn't want to say anything
in case I would end up regretting it, but
I'm super frustrated.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O030300002_03_030");
    MsgDisp("Honda","Aah, I wanted to win with you!");
    MsgDisp("主人公","(Last place......
I wish we had been more in sync......)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("O030300002_03_040");
    MsgDisp("Honda","Aah, utter defeat.");
    MsgDisp("主人公","Sorry......");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O030300002_03_050");
    MsgDisp("Honda","Hm?
You don't need to apologize.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O030300002_03_060");
    MsgDisp("Honda","It's a three-legged race, so you weren't
running alone, right?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3);
    VoicePlay("O030300002_03_070");
    MsgDisp("Honda","It's not like just one of us would be at
fault, so don't feel responsible for it.
Okay?");
    MsgDisp("主人公","Okay......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O030300002_03_080");
    MsgDisp("Honda","Good.
Even if the results say differently, I
think you're the best partner for me!");
    MsgDisp("主人公","(｛本多＊＊｝......
That's why last place is so
frustrating......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
