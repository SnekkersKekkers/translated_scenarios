BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,#1,#1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_000");
    MsgDisp("Himuro","Preparations for opening are?");
    MsgDisp("主人公","Perfect.");
    MsgDisp("主人公","Ah, here's the delivery address and slip.
The flowers to be delivered are prepared,
too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_010");
    MsgDisp("Himuro","You're being pretty useful.");
    MsgDisp("主人公","Since I'm used to this now.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("I460600008_06_020");
    MsgDisp("Himuro","It's not about being used to this.
The store moves around you, like you're
managing it");
    MsgDisp("主人公","You're exaggerating.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_030");
    MsgDisp("Himuro","I'm thinking that I should smack our
manager since they've been slacking and
leaving all the work to you recently.");
    MsgDisp("主人公","Huh∋");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("I460600008_06_040");
    MsgDisp("Himuro","You're the only one who can manage like
our manager.
I'm counting on you.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alright, let's work hard today, too!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you very much!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_050");
    MsgDisp("Himuro","Today drew a huge crowd, too.
This place is getting more and more
popular thanks to a certain someone.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_060");
    MsgDisp("Himuro","\"There's a clerk who's knowledgeable and
friendly, too\".
...It's you, isn't it.");
    MsgDisp("主人公","What!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I460600008_06_070");
    MsgDisp("Himuro","What are you going to do with all the
knowledge, anyways?
Aiming to be a florist in the future?");
    MsgDisp("主人公","I haven't thought that far ahead...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_080");
    MsgDisp("Himuro","I think you'd do well.
Why don't you consider it as an option?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("I460600008_06_090");
    MsgDisp("Himuro","If you make it big, I'll have you hire me.");
    MsgDisp("主人公","Running a flower shop with
｛氷室＊＊｝, huh.
It might be nice.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I460600008_06_100");
    MsgDisp("Himuro","...Just so you know, I'll have you pay me
a high salary.");
    MsgDisp("主人公","Hehe.
Then work hard for it, 'kay?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("I460600008_06_110");
    MsgDisp("Himuro","You said it.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600008_06_120");
    MsgDisp("Himuro","That's enough idle chatter.
Let's get back to work.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(It's fun working part-time with
｛氷室＊＊｝.
I'm glad I chose to work here!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
