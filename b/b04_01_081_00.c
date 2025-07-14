BGOpen("fp210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040108100_01_000");
MsgDisp("Kazama","It's great, seeing the cherry blossom trees.
It finally feels like I'm really back.");
MsgSel("｛風真＊＊｝, the flurry of cherry blossoms around you suits you.","Cherry blossoms are so fleeting...","I want to eat some delicious cherry blossom mochi.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108100_01_010");
    MsgDisp("Kazama","Ooh, Even you say nice things once in
awhile. Now I'm a little scared of the
recoil, though.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108100_01_020");
    MsgDisp("Kazama","Huh?
Is this where I'm supposed to laugh?");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108100_01_030");
    MsgDisp("Kazama","Yes yes, I know.
It's a relief to see you the same as
always.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
