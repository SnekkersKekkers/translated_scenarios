MsgClose();
ChOpen(2,255,0,0,4,#1,#1,0,0);
VoicePlay("B040202302_02_000");
MsgDisp("Sassa","It's like in those exciting sports anime.
A strong opponent waits across the sea!
Feels like that sort of scene......");
MsgSel("Is that how ｛颯砂＊＊｝ also feels?","Can you picture the face of your rival?","｛颯砂＊＊｝ won't lose to anyone∈");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040202302_02_010");
    MsgDisp("Sassa","Haha, definitely not.
My only rival is myself.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040202302_02_020");
    MsgDisp("Sassa","Yeah, I can see his face in
the sunset.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040202302_02_030");
        MsgDisp("Sassa","......Ah, thank you.
It was just a joke, though......");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040202302_02_040");
        MsgDisp("Sassa","Uhm......
I don't plan on losing either.");
        MsgDisp("主人公","Yeah, of course.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040202302_02_050");
        MsgDisp("Sassa","Haha, that's reassuring.");
        MsgDisp("主人公","I truly believe that......");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040202302_02_060");
        MsgDisp("Sassa","I think I understand. Sorry. That's my
bad.");
        MsgDisp("主人公","Eh?");
        ChEye(2,4);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040202302_02_070");
        MsgDisp("Sassa","You always believe in me.
That's why I was acting kind of weird.");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,1);
        VoicePlay("B040202302_02_080");
        MsgDisp("Sassa","I won't let your words become fairytale.
That's a promise.");
        MsgDisp("主人公","Good.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040202302_02_090");
        MsgDisp("Sassa","Getting all passionate while out to sea
like this, it really feels like an anime
after all, huh?");
        MsgDisp("主人公","Hehe!");
        MsgDisp("主人公","(If it's ｛颯砂＊＊｝, I truly believe he
will make his dreams come true.)");
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
