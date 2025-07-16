BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
SEPlay("EV_SE_513");
SEWait();
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
ScrFadeIn(0);
VoicePlay("B040715102_07_000");
MsgDisp("Mikage","Alright, strike.");
MsgSel("There's nothing more to teach you.","There's still a ways to go, I won't lose!","High five!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040715102_07_010");
    MsgDisp("Mikage","It's thanks to you, Master!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040715102_07_020");
    MsgDisp("Mikage","Oh, has that gotten you motivated?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040715102_07_030");
        MsgDisp("Mikage","O-Oh.
Isn't that overkill?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040715102_07_040");
        MsgDisp("Mikage","O-Oh.");
        MsgDisp("主人公","Eh, what's wrong?");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040715102_07_050");
        MsgDisp("Mikage","Is that a bowling rule?");
        MsgDisp("主人公","It's not a rule, but everyone does it?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040715102_07_060");
        MsgDisp("Mikage","I see.
Then... next time?");
        MsgDisp("主人公","Ah...okay.");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040715102_07_070");
        MsgDisp("Mikage","The strike is a double-edged sword.");
        MsgDisp("主人公","(Double-edged sword...?
Even so, ｛御影＊＊｝ has
improved a lot.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
