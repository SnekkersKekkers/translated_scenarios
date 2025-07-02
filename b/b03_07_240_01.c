BGOpen("tr500",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B030724001_07_000");
MsgDisp("Mikage","This is nice and relaxing.");
MsgDisp("主人公","Yeah, it really is.");
MsgSel("I wonder if there are animals?","Want to head to the campground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030724001_07_010");
    MsgDisp("Mikage","Alright.
Let's go to the farm and see them.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B030724001_07_020");
    MsgDisp("Mikage","Camping, huh.
That's great, gets me riled up.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
