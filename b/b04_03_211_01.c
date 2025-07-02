BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,5);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321101_03_000");
MsgDisp("Honda","They're all packed out today.
Let's be efficient in 
seeing lots of things!");
MsgSel("Seems like the reptile zone is empty.","The naked mole rat is an amazing name huh?","There's a new born corner?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("B040321101_03_010");
    MsgDisp("Honda","Really?
Reptiles are so interesting though.
Then, let's set off for the
giant tortoise pasture!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("B040321101_03_020");
    MsgDisp("Honda","There it is～, the naked mole rat.
Well, I'm purely interested. Even though
it's a mouse it can live for 30 years～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040321101_03_030");
    MsgDisp("Honda","Yeah, there is.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
