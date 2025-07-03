MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040423602_04_000");
MsgDisp("Nanatsumori","... When I see this,
I feel like summer is coming to an end.");
MsgSel("I won't forget this for the rest of my life...","It feels a bit sad, huh?","We've got summer homework huhー...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMotion(4,1,1);
    VoicePlay("B040423602_04_010");
    MsgDisp("Nanatsumori","Me too.
I don't think I'll forget today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423602_04_020");
    MsgDisp("Nanatsumori","Yeah.
But it'll become a good memory
of this summer.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040423602_04_030");
        MsgDisp("Nanatsumori","You can't read the 
room huhー.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423602_04_040");
        MsgDisp("Nanatsumori","My, oh my....
you're bringing that up
in this atmosphere?");
        MsgDisp("主人公","It just came to my mind.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040423602_04_050");
        MsgDisp("Nanatsumori","It also just came to my mind.
Oh dear, oh dear.");
        MsgDisp("主人公","Ugh...sorry.
we were having so much fun too.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040423602_04_060");
        MsgDisp("Nanatsumori","No problem.");
        MsgDisp("主人公","｛七ツ森＊｝, are you nearly 
done with the homework?");
        ChEye(4,2);
        ChMouth(4,3);
        VoicePlay("B040423602_04_070");
        MsgDisp("Nanatsumori","No way.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423602_04_080");
        MsgDisp("Nanatsumori","As punishmemt for just now, 
I;ll copy all of your notes.");
        MsgDisp("主人公","Ehhh∋");
        ChEye(4,0);
        ChMouth(4,0);
        VoicePlay("B040423602_04_090");
        MsgDisp("Nanatsumori","Or maybe...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040423602_04_100");
        MsgDisp("Nanatsumori","Should we have a study 
session in my room?");
        MsgDisp("主人公","Eh?");
        VoicePlay("B040423602_04_110");
        MsgDisp("Nanatsumori","I live alone, so no
one will disturb us.");
        MsgDisp("主人公","But...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,10);
        ChMouthOpenLevel(4,0);
        ChCheek(4,8);
        VoicePlay("B040423602_04_120");
        MsgDisp("Nanatsumori","…………");
        ChMouth(4,1);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,-1);
        VoicePlay("B040423602_04_130");
        MsgDisp("Nanatsumori","...Stop.
Sorry, it was a joke.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040423602_04_140");
        MsgDisp("Nanatsumori","How am I gonna be so embarrassed 
after I was the one who said it...
I'm so patheticー...");
        MsgDisp("主人公","(My heart is racing...)");
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
