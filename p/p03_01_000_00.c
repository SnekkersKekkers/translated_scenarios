BGMPlay("BGM_PLACE_SHOP",0.01);
Wait(40,0);
BGOpen("sc720",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting.
Here's your matcha and mitarashi dango～!");
    MsgDisp("主人公","(Phew......
I didn't think this many customers would
come......)");
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoicePlay("P030100000_01_000");
    MsgDisp("Kazama","Seems like business is booming.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Welcome～!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P030100000_01_010");
    MsgDisp("Kazama","I see, so it's the power of you being the
face of the shop......");
    MsgDisp("主人公","Huh, what are you talking about?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P030100000_01_020");
    MsgDisp("Kazama","You start your shift, and suddenly it's
like this. Aren't I always telling you
this? About your power of attraction.");
    MsgDisp("主人公","I think it's the power of the dango set
made by our cooking team, though?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("P030100000_01_030");
    MsgDisp("Kazama","Sure, sure.
I'll take that dango set, then.");
    ChEyeOpenLevel(1,#1);
    MsgDisp("主人公","Understood, one dumpling set～!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting.
Here is your matcha and mitarashi dango..");
    MsgDisp("主人公","(Phew......
I didn't think this many customers would
come......)");
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P030100000_01_040");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Welcome.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P030100000_01_050");
    MsgDisp("Kazama","Amazing.
The line's all the way in the hallway.");
    MsgDisp("主人公","Yeah, it's going great!
Please have a seat at this table.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P030100000_01_060");
    MsgDisp("Kazama","Hey, don't get too serious about this,
okay?");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,4);
    ChEyeOpenLevel(1,8);
    ChCheek(1,5);
    VoicePlay("P030100000_01_070");
    MsgDisp("Kazama","Even though you normally stand out
already, look, today you're wearing that.");
    ChMotion(1,0);
    MsgDisp("主人公","Ah, do you like it?
This uniform is pretty cute.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    ChCheek(1,7);
    VoicePlay("P030100000_01_080");
    MsgDisp("Kazama","Yeah, it's cute.
...... Geez, just get me a dango set.");
    ChEyeOpenLevel(1,#1);
    MsgDisp("主人公","Hehe.
Alright, one dango set coming right up～!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
