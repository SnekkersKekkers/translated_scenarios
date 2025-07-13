BGOpen("ex020",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChMotion(1,1);
    VoicePlay("S070100000_01_000");
    MsgDisp("Kazama","It's packed.
It's nice to see the local shrine so 
beloved.");
    MsgDisp("主人公","Yeah.
It's really a huge turnout.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,3);
    VoicePlay("S070100000_01_010");
    MsgDisp("Kazama","Look.
It's really restless around here.");
    MsgDisp("主人公","(Is ｛風真＊＊｝
worrying this year, too?)");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S070100000_01_020");
    MsgDisp("Kazama","Should we carve tablets since we're
visiting the shrine?");
    MsgDisp("主人公","Yeah, that sounds good.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S070100000_01_030");
    MsgDisp("Kazama","Let's share one.");
    MsgDisp("主人公","Hehe, it feels like we're family.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,7);
    VoicePlay("S070100000_01_040");
    MsgDisp("Kazama","That's fine.
It'll save the Gods' time too.");
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,1);
    ChCheek(1,5);
    VoicePlay("S070100000_01_050");
    MsgDisp("Kazama","Surely, we share the same wish.");
    MsgDisp("主人公","(｛風真＊＊｝......?)");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    ScrFadeIn(0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("S070100000_01_060");
    MsgDisp("Kazama","Wow.
How long will it take us to get to the
shrine?");
    MsgDisp("主人公","It may be a few hours.
But this way, we can take our time and
think about our wishes.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("S070100000_01_070");
    MsgDisp("Kazama","I've already decided on mine.");
    MsgDisp("主人公","Eh, what kind of wish is it?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("S070100000_01_080");
    MsgDisp("Kazama","Ha......you say that so carefreely.
My wish has been the same for 10 years.");
    MsgDisp("主人公","(｛風真＊＊｝'s wish.
I wonder what it is......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
