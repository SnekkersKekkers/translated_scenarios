BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,3,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
ChMotion(5,3);
VoicePlay("B040523302_05_000");
MsgDisp("Hiiragi","Haaー, 
the inside of my mouth is parched.");
MsgSel("It's because you were laughing whilst jumping","Your voice was loud?","Shall we take a break?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040523302_05_010");
    MsgDisp("Hiiragi","I can't help but laugh.
That's the char of this attraction.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523302_05_020");
        MsgDisp("Hiiragi","Somewhat, ah, please excuse me.
It seems like I was the only one having
fun.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523302_05_030");
        MsgDisp("Hiiragi","Ah, was I the only one enjoying myself?");
        MsgDisp("主人公","No, 
it was scary but it was fun.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040523302_05_040");
        MsgDisp("Hiiragi","It would be fine if we jumped together
right?
This I mean?");
        MsgDisp("主人公","Eh?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040523302_05_050");
        MsgDisp("Hiiragi","If we do it together, it won't be scary I
suppose.");
        MsgDisp("主人公","Yeah...but, If the lines get tangled it
might be dangerous?");
        ChEye(5,3);
        ChMouth(5,3);
        VoicePlay("B040523302_05_060");
        MsgDisp("Hiiragi","One thick line. How about enjoying bungee
jumping as a pair? It'll feel like we're
in the same boat.");
        ChMotion(5,4);
        VoicePlay("B040523302_05_070");
        MsgDisp("Hiiragi","I may request for it.");
        MsgDisp("主人公","(If we could really jump as a two...
No, as I thought it's scary.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040523302_05_080");
    MsgDisp("Hiiragi","Yes, 
lets drink something cold.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
