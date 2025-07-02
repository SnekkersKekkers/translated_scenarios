BGOpen("ne100",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright then.
It's time to go home......)");
VoicePlay("E012150000_21_000");
MsgDisp("Michiru?","Are you just heading out?");
BGMPlay("BGM_C21_MICHIRU_A",0.01);
MsgClose();
ChOpen(21,255,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛みちる＊｝!
Nope, I'm about to go home.
What about you?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,1);
VoicePlay("E012150000_21_010");
MsgDisp("Michiru","I'm going to a photoshoot now. But
I wanted to stop by a store and pick up
some souvenirs on the way there.");
MsgDisp("主人公","Oh, you're working?
Good luck!");
ChSet(21,3);
VoicePlay("E012150000_21_020");
MsgDisp("Michiru","Thank you.
Mari, be careful on your way back.
Bye.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(21);
MsgDisp("主人公","(I see.
I guess sometimes models can get called
in on short notice......)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(21,255,0,0,0,-1,-1,0,0,0,30);
VoicePlay("E012150000_21_030");
MsgDisp("Michiru","Pant, pant......");
MsgDisp("主人公","Huh?
｛みちる＊｝, what's wrong?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("E012150000_21_040");
MsgDisp("Michiru","Sigh......
I'm so forgetful.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,1);
VoicePlay("E012150000_21_050");
MsgDisp("Michiru","Here, take this.");
SEPlay("EV_SE_520",0.1,0.5);
SEWait();
MsgDisp("主人公","......Sweets?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("E012150000_21_060");
MsgDisp("Michiru","That's right.
I got some freebies earlier when I was
buying snacks.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("E012150000_21_070");
MsgDisp("Michiru","I was thinking about sharing them
with you but somehow I completely
forgot.");
MsgDisp("主人公","Eh?
Did you come all the way back here just
to give these to me?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,1);
VoicePlay("E012150000_21_080");
MsgDisp("Michiru","Yeah.
What a relief. Now I can work in peace.
Okay, see you later.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(21);
MsgDisp("主人公","(｛みちる＊｝ is so polite......
Hehe, I got some nice sweets. I'll eat
these when I get home!)");
MsgClose();
ScrFadeOut(0,0);
