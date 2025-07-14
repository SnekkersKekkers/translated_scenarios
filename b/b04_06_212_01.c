BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040621201_06_000");
MsgDisp("Himuro","Animal accessories?
They even dell stuff like that?");
MsgSel("Let's wear matching ones","Kids would probably be happy","This is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040621201_06_010");
    MsgDisp("Himuro","Firmly denied.
End of.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040621201_06_020");
    MsgDisp("Himuro","Yeah, definitely.
The main target is probably kids.
Then, maybe?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621201_06_030");
    MsgDisp("Himuro","As expected, 
even you're embarrassed?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
