BGOpen("tr510",0);
ChLayout(1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2,1);
ChEyeOpenLevel(7,0);
ScrFadeIn(0);
VoicePlay("B040724102_07_000");
MsgDisp("Mikage","Phew... haaa...
This place is so calming.");
MsgSel("It's just like ｛御影＊＊｝'s home.","｛御影＊＊｝'s family home is also a ranch, right?","You can't live here.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    ChEyeOpenLevel(7,8);
    VoicePlay("B040724102_07_010");
    MsgDisp("Mikage","Welcome. It smells a bit, but make
yourself at home～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040724102_07_020");
        MsgDisp("Mikage","Yeah, it was a sightseeing farm.
But, it wasn't as relaxed as this.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040724102_07_030");
        MsgDisp("Mikage","Yeah, it was a sightseeing farm.
But, it's more business-minded.");
        MsgDisp("主人公","How is Molly-chan?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040724102_07_040");
        MsgDisp("Mikage","Yeah, she's doing well.
Apparently she produces a lot of milk.");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040724102_07_050");
        MsgDisp("Mikage","There are so many girls I'm interested in,
but I haven't been able to see them at
all.");
        MsgDisp("主人公","｛御影＊＊｝?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040724102_07_060");
        MsgDisp("Mikage","Don't look so worried.
There's a girl here I'm interested in too,
after all.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040724102_07_070");
        MsgDisp("Mikage","Right?");
        MsgDisp("主人公","That's...");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040724102_07_080");
        MsgDisp("Mikage","Molly, you, and the vegetables in the
gardening club are all important.");
        MsgDisp("主人公","Ehh, me and the vegetables?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040724102_07_090");
        MsgDisp("Mikage","Ah, and the brats in our class.");
        MsgDisp("主人公","(I wonder if ｛御影＊＊｝ will quit
being a teacher one day and work on a
farm...that's a long way off though,
right?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040724102_07_100");
    MsgDisp("Mikage","Is it no good～?
I think I could live a relaxed life here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
