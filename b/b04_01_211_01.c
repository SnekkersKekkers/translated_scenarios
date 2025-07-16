BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040121101_01_000");
MsgDisp("Kazama","An exhibition in a form so close to
nature... it's really elaborate.");
MsgSel("That polar bear dive was amazing.","Feeding time on monkey mountain was amazing","The orangutan tightrope walking was amazing");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040121101_01_010");
    MsgDisp("Kazama","Yeah, that surprised me.
It was especially impressive seeing it
from under water.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040121101_01_020");
    MsgDisp("Kazama","There were all kinds of clever ones and
wicked ones.
Maybe it's not so different from school?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040121101_01_030");
    MsgDisp("Kazama","I was really nervous about it carrying its
kid from such a high place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
