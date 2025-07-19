BGOpen("ar600",0);
MsgClose();
ChOpen(3,35,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C03_HONDA_A");
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_880");
    MsgDisp("Honda","Ah, the manager already went out for the
store association meeting.");
    MsgDisp("主人公","Did you need something?
I think I can still catch them if I go
now.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_890");
    MsgDisp("Honda","I'm not in a rush, so you don't have to go
that far.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_900");
    MsgDisp("Honda","Besides, the manager's substitute is here,
so we'll have no problems keeping the
store open.");
    MsgDisp("主人公","The manager's substitute...?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_910");
    MsgDisp("Honda","Yeah yeah, you.
Didn't you realize?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_920");
    MsgDisp("Honda","They trust you to watch the store.
Because of that, the manager feels
comfortable leaving.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_930");
    MsgDisp("Honda","I agree with the manager, too!");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2,1);
    VoicePlay("I260300000_03_940");
    MsgDisp("Honda","...Well, it still would be a problem if
the manager left too much.");
    MsgDisp("主人公","(I didn't think they trusted me so much...
I'm glad I worked hard!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_950");
    MsgDisp("Honda","Hey, did you hear?
The next book fair might be left up to us.");
    MsgDisp("主人公","\"Us\"...me too∋");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_960");
    MsgDisp("Honda","Yeah yeah!
Is it that surprising?");
    MsgDisp("主人公","I expected you, ｛本多＊＊｝, but I'm
worried about whether I can do it.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_970");
    MsgDisp("Honda","You're the only one who can!");
    MsgDisp("主人公","∋");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_980");
    MsgDisp("Honda","You always think about the customer's
perspective, even beyond what you're
assigned-");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_990");
    MsgDisp("Honda","All the staff know how hard you've been
working, and that's why you were chosen,
you know?");
    MsgDisp("主人公","｛本多＊＊｝...");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_1000");
    MsgDisp("Honda","Yeah yeah, I completely agree with the
manager's decision!
Hey hey, where should we start?");
    MsgDisp("主人公","(They're expecting a lot...
Alright, let's do our best with
｛本多＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
