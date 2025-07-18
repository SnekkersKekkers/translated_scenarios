BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0600001_06_000");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H1A0600001_06_010");
    MsgDisp("Himuro","It just means that that's the extent of
your skills right now.
Nothing more than that.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("H1A0600001_06_020");
    MsgDisp("Himuro","But, being able to make it to a place like
this deserves some credit.
So...head up.");
    MsgDisp("主人公","Yeah, thanks.");
    MsgDisp("主人公","(We lost, but I'm glad we made it here...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0600001_06_030");
    MsgDisp("Himuro","...What, you're not crying?");
    MsgDisp("主人公","｛氷室＊＊｝...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H1A0600001_06_040");
    MsgDisp("Himuro","Well, that's fine too.
It wasn't a match that you should be
ashamed to lose.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("H1A0600001_06_050");
    MsgDisp("Himuro","It's not all about the results.
You enjoyed your youth.
Isn't that enough?");
    MsgDisp("主人公","Yeah.
Thank you, ｛氷室＊＊｝...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,5);
    VoicePlay("H1A0600001_06_060");
    MsgDisp("Himuro","I wasn't trying to comfort you.
Just telling the truth.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("H1A0600001_06_070");
    MsgDisp("Himuro","You worked hard these three years.
Rest up today.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the baseball club manager...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
