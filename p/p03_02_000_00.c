BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc720",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...
I didn't think this many customers would
come...)");
    MsgClose();
    ChOpen(2,254,0,0,4,#1,#1,0,0);
    VoicePlay("P030200000_02_000");
    MsgDisp("Sassa","Excuse me!
Wow...this is pretty fancy.");
    MsgDisp("主人公","｛颯砂＊＊｝, welcome!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P030200000_02_010");
    MsgDisp("Sassa","So you're in a yukata too.
This place really has an atmosphere!");
    MsgDisp("主人公","Yeah, not just the waitstaff either, but
the cooking team is also wearing yukata.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("P030200000_02_020");
    MsgDisp("Sassa","You guys were pretty thorough.
Looks like I can look forward to the food,
too.");
    MsgDisp("主人公","Hehe, go ahead and savor it.
Allow me to show you to your seat, sir!");
    break ;
    case 4:
    case 5:
    BGOpen("sc720",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...
I didn't think this many customers would
come...)");
    MsgClose();
    ChOpen(2,254,4,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P030200000_02_030");
    MsgDisp("Sassa","｛主人公｝, I was lured here by
the smell of those dango.");
    MsgDisp("主人公","It's ｛颯砂＊＊｝!
Welcome!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P030200000_02_040");
    MsgDisp("Sassa","Wow, a yukata.
It's nice.
I'm glad that smell brought me here.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P030200000_02_050");
    MsgDisp("Sassa","I'll wait to eat the dango first before I
judge them, but I have nothing bad to say
about that yukata.");
    MsgDisp("主人公","I'm glad.
Then, do you want to try the dango and
matcha?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("P030200000_02_060");
    MsgDisp("Sassa","Okay.
Then I'll take the set you recommend!");
    MsgDisp("主人公","Yes.
I've received your order!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(2,#1);
ChMouth(2,#1);
ChCheek(2,0);
