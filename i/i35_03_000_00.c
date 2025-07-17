BGOpen("ar100",0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,255,1,0,3,#1,#1,0,0);
    VoicePlay("I350300000_03_000");
    MsgDisp("Honda","Ah, you're here.");
    MsgDisp("主人公","｛本多＊＊｝, what is it?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I350300000_03_010");
    MsgDisp("Honda","I wanted to see where you're working
part-time.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I350300000_03_020");
    MsgDisp("Honda","Wow, it looks like you've become a real
waitress.");
    MsgDisp("主人公","Hm?
I still have a long way to go.");
    ChMotion(3,5,1);
    VoicePlay("I350300000_03_030");
    MsgDisp("Honda","Then, when I see you during your next
shift, you'll show me even more growth?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I350300000_03_040");
    MsgDisp("Honda","I'll look forward to it!");
    MsgDisp("主人公","(Let's work hard to show him how much I've
grown next time he comes!)");
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,255,3,3,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("I350300000_03_050");
    MsgDisp("Honda","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Welcome!");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I350300000_03_060");
    MsgDisp("Honda","I came to see you work.
Can I order?");
    MsgDisp("主人公","Hehe, of course!");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","Here's your order.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I350300000_03_070");
    MsgDisp("Honda","Thanks! To be honest, I was surprised for
a bit because you seem a little different
here compared to at school.");
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I350300000_03_080");
    MsgDisp("Honda","I was like \"Who?\" at first.");
    MsgDisp("主人公","Hehe, you think so?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I350300000_03_090");
    MsgDisp("Honda","I do, you know?
But, you're doing well, and I think this
job suits you.");
    MsgDisp("主人公","(I'm happy I got complimented.
But... am I really that different here?)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C03_HONDA_A",0.01);
    ChOpen(3,255,1,3,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("I350300000_03_100");
    MsgDisp("Honda","｛主人公｝.
Hello!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
Welcome.");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("I350300000_03_110");
    MsgDisp("Honda","It's too bad, but I'm not here as a
customer today.
I'm delivering magazines.");
    MsgDisp("主人公","Ah, I see.
You're working hard at the bookstore.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("I350300000_03_120");
    MsgDisp("Honda","Da, I'm really glad I took over.");
    MsgDisp("主人公","Hm?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I350300000_03_130");
    MsgDisp("Honda","Actually, my manager was supposed to
deliver these, but I asked them to leave
it to me.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I350300000_03_140");
    MsgDisp("Honda","Seeing you working so hard, I wanted to
have some of your power.");
    MsgDisp("主人公","Hm?
Some of my power...?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I350300000_03_150");
    MsgDisp("Honda","Yeah, I'm fully charged now!
Well, keep it up, okay?");
    MsgDisp("主人公","(｛本多＊＊｝ came to check on me...
Alright, let's try even harder!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
