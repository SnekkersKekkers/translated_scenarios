MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0);
VoicePlay("B040602302_06_000");
MsgDisp("Himuro","Do you like the sea?");
MsgSel("I like it!","Not really...","I like｛氷室＊＊｝");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602302_06_010");
    MsgDisp("Himuro","I thought as much.
You really are simple.
...Well, I'm also simple.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602302_06_020");
    MsgDisp("Himuro","Then, 
should we head back soon?");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602302_06_030");
        MsgDisp("Himuro","I was trying to talk to 
you seriously though?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,5);
        ChCheek(6,10);
        VoicePlay("B040602302_06_040");
        MsgDisp("Himuro","Haa?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602302_06_050");
        MsgDisp("Himuro","What's with that?
Did you think I would be 
happy with that?");
        MsgDisp("主人公","Ah, sorry...");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040602302_06_060");
        MsgDisp("Himuro","...There's no need to 
apologize though?");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040602302_06_070");
        MsgDisp("Himuro","When someone likes you, it's
normal to feel happy I guess.");
        MsgDisp("主人公","Eh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040602302_06_080");
        MsgDisp("Himuro","What's with that reaction?
There's no deeper meaning to it.
That's how it is even for you right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602302_06_090");
        MsgDisp("Himuro","Still, you shouldn't overuse 
a joke like that. Someone might
get the wrong idea.");
        MsgDisp("主人公","Yeah, understood.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040602302_06_100");
        MsgDisp("Himuro","...So it was a joke after all.");
        MsgDisp("主人公","Hm? What was that just now?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040602302_06_110");
        MsgDisp("Himuro","It's fine, it's nothing.");
        MsgDisp("主人公","（｛氷室＊＊｝？）");
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
