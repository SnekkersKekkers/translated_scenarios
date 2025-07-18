switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600002_06_040");
    MsgDisp("Himuro","...Were you fine being with me?
On the last New Years of your high school
years.");
    MsgDisp("主人公","Eh, what do you mean?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600002_06_050");
    MsgDisp("Himuro","It's not a big deal but...
Was I the only person you wanted to go
with?");
    MsgDisp("主人公","That kind of thing, maybe not?");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("S120600002_06_060");
    MsgDisp("Himuro","Sigh...
What a lack of confidence in that answer.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("S120600002_06_070");
    MsgDisp("Himuro","Well, if there's nothing else to do next
year, I'll go with you again.");
    MsgDisp("主人公","Hehe, thank you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("S120600002_06_080");
    MsgDisp("Himuro","Yeah.
Happy New Years.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(My last New Years in high school...
It went by so quickly.)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for taking me.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600002_06_120");
    MsgDisp("Himuro","I'll give you a proper send-off at the
graduation ceremony.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600002_06_130");
    MsgDisp("Himuro","Your graduation. I've been avoiding it for
a while...But now I feel like I'm ready to
let you go.");
    MsgDisp("主人公","｛氷室＊＊｝...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("S120600002_06_140");
    MsgDisp("Himuro","Graduation doesn't have to mean goodbye,
right?");
    MsgDisp("主人公","Yeah!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("S120600002_06_150");
    MsgDisp("Himuro","First, just graduate properly.
Though I suppose I wouldn't mind if you
happened to repeat the year?");
    MsgDisp("主人公","Geez.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,1);
    VoicePlay("S120600002_06_160");
    MsgDisp("Himuro","Cya then.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(｛氷室＊＊｝...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
