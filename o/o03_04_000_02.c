BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,1,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("O030400002_04_000");
    MsgDisp("Nanatsumori","Last......
God.");
    MsgDisp("主人公","(Last, huh......
We weren't in sync at all......)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("O030400002_04_010");
    MsgDisp("Nanatsumori","Last is pretty embarrassing......");
    MsgDisp("主人公","I don't think we were in sync at all......");
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("O030400002_04_020");
    MsgDisp("Nanatsumori","No helping it.
In the first place, I'm no good at
exercise anyways.");
    MsgDisp("主人公","(Hm, if we were a little more in sync,
maybe we would have gotten a better
rank......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("O030400002_04_030");
    MsgDisp("Nanatsumori","It's all my fault.");
    MsgDisp("主人公","｛七ツ森＊｝, even I......");
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("O030400002_04_040");
    MsgDisp("Nanatsumori","Then it's both our faults.");
    MsgDisp("主人公","Y-Yeah?");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("O030400002_04_050");
    MsgDisp("Nanatsumori","We couldn't combine our strengths.");
    ChEye(4,1);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("O030400002_04_060");
    MsgDisp("Nanatsumori","So, if we get to work together again,
let's both try harder.");
    MsgDisp("主人公","(｛七ツ森＊｝ looks serious......
But, getting last is still
frustrating......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
