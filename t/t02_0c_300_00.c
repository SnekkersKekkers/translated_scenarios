BGOpen("sc210",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This is the place where I painted, looked
at the flowers, and spoke with everyone.)");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
VoiceEVSPlay(5);
VoicePlay("T020C30000_05_000");
MsgDisp("Hiiragi?","｛主人公｝.");
BGMPlay("BGM_HANYOU_D",0.01);
ChOpen(5,254,0,4,4,#1,#1,0,0);
ChEye(5,4);
VoicePlay("T020C30000_05_010");
MsgDisp("Hiiragi","Congratulations on graduating.");
MsgDisp("主人公","Thank you.
｛柊＊＊＊｝, congratulations to you too
on graduating.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("T020C30000_05_020");
MsgDisp("Hiiragi","It's a miracle that I get to graduate
together with you.");
MsgDisp("主人公","Yes. ｛柊＊＊＊｝, you worked hard on both
your studies and student council
activities.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("T020C30000_05_030");
MsgDisp("Hiiragi","I certainly tried my best.
But I was able to give it my all thanks to
you, Inori-kun, and Mikage-sensei.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("T020C30000_05_040");
MsgDisp("Hiiragi","I fondly remember you having fun sitting
on that bench and drawing pictures.");
ChEye(5,4);
ChEyeOpenLevel(5,0);
MsgDisp("主人公","｛柊＊＊＊｝ often used to work at that
window.
As that was the student council room.");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(5,2);
ChOpen(6,254,0,0,0,#1,#1,0,1);
VoicePlay("T020C30000_06_000");
MsgDisp("Himuro","Sorry to interrupt your 
reminiscing.");
ChEye(5,3);
ChMouth(5,2);
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("T020C30000_06_010");
MsgDisp("Himuro","I was looking around at all the different
classrooms. It felt as though I was being
left behind on a school trip.");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,9);
MsgDisp("主人公","Hehe, we wouldn't do that.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("T020C30000_06_020");
MsgDisp("Himuro","......Congratulations to you both.");
ChMotion(5,0,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020C30000_05_050");
MsgDisp("Hiiragi","Thank you Inori-kun.");
MsgDisp("主人公","Thank you.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020C30000_06_030");
MsgDisp("Himuro","Haa... either way, it's unavoidable for me
to be left behind. I'm staying here, after
all.");
ChEye(5,2);
ChEyeOpenLevel(5,9);
MsgDisp("主人公","｛氷室＊＊｝......");
ChClose(5,0,30);
ChClose(6,0,30);
ChLayout(2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
ChOpen(5,254,0,0,4,#1,#1,0,0,0,30);
ChOpen(6,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(7,254,1,0,0,#1,#1,0,2);
VoicePlay("T020C30000_07_000");
MsgDisp("Mikage","Congratulations to you both on your
graduation!
You did well, Yanosuke.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("T020C30000_05_060");
MsgDisp("Hiiragi","Thank you very much.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("T020C30000_07_010");
MsgDisp("Mikage","｛主人公｝, you've helped me out so
much these past three years.");
MsgDisp("主人公","No, it was nothing...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("T020C30000_07_020");
MsgDisp("Mikage","What are you saying? You helped me with
self-introductions from the first day of
school and continued to do so for three
years.");
ChEye(5,4);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("T020C30000_07_030");
MsgDisp("Mikage","Everything from your kindness, your
seriousness to your slight
absent-mindedness has helped me so much,
thank you.");
MsgDisp("主人公","｛御影＊＊｝...... Yes!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020C30000_07_040");
MsgDisp("Mikage","Also... Inori, don't worry.");
ChEye(5,0);
ChMouth(5,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020C30000_06_040");
MsgDisp("Himuro","Eh?");
ChEye(7,3);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("T020C30000_07_050");
MsgDisp("Mikage","I'm also one of the people 
staying behind.");
ChEye(5,4);
ChMouth(5,4);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("T020C30000_06_050");
MsgDisp("Himuro","That's right.
I'll be graduating next year.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("T020C30000_05_070");
MsgDisp("Hiiragi","This day next year will be Inori's
graduation ceremony.
Let's get together to celebrate.");
MsgDisp("主人公","Yes!");
ChEye(5,4);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("T020C30000_06_060");
MsgDisp("Himuro","...Really? If that's the case, I'll
forgive you for leaving me behind today.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("T020C30000_07_060");
MsgDisp("Mikage","Haha, that's good.
This is a happy ending.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("T020C30000_05_080");
MsgDisp("Hiiragi","Mikage Sensei?");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("T020C30000_07_070");
MsgDisp("Mikage","Hm?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("T020C30000_06_070");
MsgDisp("Himuro","It's Kojiro-sensei's graduation ceremony.
Perhaps you will return to your parents'
house some day?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020C30000_07_080");
MsgDisp("Mikage","...After I send Inori off, I'll talk it
over with Molly and make a decision.");
MsgDisp("主人公","Hehe. Do you think Molly-chan will want to
come back soon?");
ChEye(5,4);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("T020C30000_06_080");
MsgDisp("Himuro","It will be a problem right away.
In two years.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("T020C30000_07_090");
MsgDisp("Mikage","Look, I have my circumstances and reasons
too.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("T020C30000_05_090");
MsgDisp("Hiiragi","Is it okay for us to give you some advice?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("T020C30000_06_090");
MsgDisp("Himuro","Well, then.
Let's take our time walking home.");
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(5,0,30);
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,0);
VoicePlay("T020C30000_07_100");
MsgDisp("Mikage","Oi, enough about me.
Geez, you're enjoying this.");
ChClose(7,0,30);
ChLayout(1);
SEPlay("EV_SE_544");
ChOpen(7,254,2,0,0,#1,#1,0,0,0,30);
VoicePlay("T020C30000_07_110");
MsgDisp("Mikage","Well, shall we go?");
MsgDisp("主人公","Hehe, yes!");
BGMStop(5);
MsgClose();
ScrFadeOut(0,0,120);
ChClose(7,0,0);
Wait(300,0);
