BGOpen("fp210",0);
ChLayout(1);
ChOpen(6,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040608101_06_000");
MsgDisp("Himuro","\"I wish to die in the spring, 
under the cherry blossoms. On the second 
month of the lunar calendar, 
when there is a full moon.");
MsgSel("Umm...?","Why on the second month of the lunar calendar?","Don't die!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608101_06_010");
    MsgDisp("Himuro","It just suddenly came to mind.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040608101_06_020");
    MsgDisp("Himuro","Because it's the old calendar?
It's easy to overlook this, 
but with the current calendar, 
the months are out of sync.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040608101_06_030");
    MsgDisp("Himuro","Are you not familiar with
Saigyo's poems?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
