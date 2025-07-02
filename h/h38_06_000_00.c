BGOpen("sc623",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("H380600000_06_000");
    MsgDisp("Himuro","Are you nervous?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
You came?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H380600000_06_010");
    MsgDisp("Himuro","Well, I was just curious what
judo was like.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("H380600000_06_020");
    MsgDisp("Himuro","Besides, I wanted to see what you've
been working so hard at these past
three years with my own eyes.");
    MsgDisp("主人公","Yeah. Thank you.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("H380600000_06_030");
    MsgDisp("Himuro","There's no reason to thank me.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H380600000_06_040");
    MsgDisp("Himuro","Show me some good matches.
If you can, bring back a victory for
our school.");
    MsgDisp("主人公","(Alright, let's do our best......!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("H380600000_06_050");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
You came?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H380600000_06_060");
    MsgDisp("Himuro","Well, yeah.
If someone here is going to win,
I don't want to miss it.");
    MsgDisp("主人公","Huh, winning?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("H380600000_06_070");
    MsgDisp("Himuro","You've made it all the way here,
so you have to aim for the top at least.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H380600000_06_080");
    MsgDisp("Himuro","Don't let this go to waste.");
    MsgDisp("主人公","Yeah, got it!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H380600000_06_090");
    MsgDisp("Himuro","That's a good expression.
I'm counting on you.");
    MsgDisp("主人公","(Alright,
let's do our best,
for ｛氷室＊＊｝ too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6);
