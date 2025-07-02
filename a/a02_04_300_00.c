MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ar100",0);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_014");
Wait(50,0);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(70,0);
MsgClose();
BGMPlay("BGM_C04_NANA_I",0.01);
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,-1,-1,0,0,0,60);
MsgDisp("主人公","Welcome!
Let me guide your to your seat——");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("A020430000_04_000");
MsgDisp("Nanatsumori?","Ah, it's alright.
I've got a favorite spot.");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(4,0,30);
ChOpen(4,35,0,0,0,-1,-1,0,0,0,30);
SEPlay("EV_SE_FOOT_WALK_KEEP_TWO",0,0.8);
SEWait();
BGOpen("ar110",0);
ScrFadeIn(0);
ChMotion(4,2);
MsgDisp("主人公","Sorry for keeping you waiting, 
here's your men——");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("A020430000_04_010");
MsgDisp("Nanatsumori?","No thanks.
I'll have a strawberry parfait,
macaron special, slice of chocolate cake
and banana pie, with hot coffee.");
MsgDisp("主人公","R- Right away!!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
VoicePlay("A020430000_04_020");
MsgDisp("Nanatsumori?","…………");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
SEPlay("EV_SE_713",0,0.8);
Wait(50,0);
SEPlay("EV_SE_596",0,0.8);
SEWait();
MsgDisp("主人公","(Is he going to eat all this by 
himself∋ And he can recite the menu,
is he some sort of regular?)");
MsgDisp("主人公","(......But anyway, this guy.
I feel like I've seen him somewhere.
Maybe he's a celebrity or something......)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Sorry for the wait.
Strawberry parfait and...... eh?");
MsgDisp("主人公","(He's not in his seat anymore,
what should I do?)");
VoicePlay("A020430000_04_030");
MsgDisp("Nanatsumori?","Ah, sorry.
Got a call, went outside.");
MsgClose();
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,255,0,0,0,-1,-1,0,0,0,60);
MsgDisp("主人公","Eh......? Excuse me, the customer who was
seated here——");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("A020430000_04_040");
MsgDisp("Nanatsumori?","Uh, yeah, that's me.");
MsgDisp("主人公","What∋");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("A020430000_04_050");
MsgDisp("Nanatsumori?","Well, I don't blame you......
Don't worry. I'm the same person 
that was seating here earlier.");
MsgDisp("主人公","A...Alright.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("A020430000_04_060");
MsgDisp("Nanatsumori?","Here, seems heavy.
Put the tray down. I'll get it myself. ");
MsgDisp("主人公","Ah......Sorry.
Thank you very much.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("A020430000_04_070");
MsgDisp("Nanatsumori?","You're welcome.");
MsgClose();
ScrFadeOut(0);
ChClose(4,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("ar100",0);
ScrFadeIn(0);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,255,0,0,0,-1,-1,0,0,0,60);
VoicePlay("A020430000_04_080");
MsgDisp("Nanatsumori?","Thanks for the food.");
MsgDisp("主人公","Thank you for coming,
Now, for the bill——");
SEPlay("EV_SE_043");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
SEPlay("EV_SE_DOOR_014",0.5);
MsgDisp("主人公","(That customer really threw me off,
First the amount of food, and then he 
came back looking so differently......)");
MsgDisp("主人公","Now, I'll get to cleaning up!
......Hmm?
Something's on the chair, 
that guy must have dropped it?");
SEPlay("EV_SE_595",0,0.6);
SEWait();
MsgDisp("主人公","It's a student card from Haba High!
Let's see......
\"Nanatsumori Minoru\"?");
SEPlay("EV_SE_DOOR_014",0,0.4);
Wait(70,0);
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,1);
Wait(60,0);
VoicePlay("A020430000_04_090");
MsgDisp("Nanatsumori?","Sorry!!
I think I forgot something!
Do you mind if I——");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChNanaType(0);
ChOpen(4,255,0,0,0,-1,-1,0,0,0,60);
MsgDisp("主人公","Ah, ｛七ツ森＊｝?");
ChEye(4,5);
ChMouth(4,2);
ChMotion(4,5,1);
VoicePlay("A020430000_04_100");
MsgDisp("Nanatsumori","!
My name...!
Why do you...");
MsgDisp("主人公","You forgot this, right?
Here.");
SEPlay("EV_SE_528",0,0.5);
SEWait();
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("A020430000_04_110");
MsgDisp("Nanatsumori","Ah, yeah, right.
Thanks.");
MsgDisp("主人公","Hehe. I'm in the same year as you, in
Habataki High too. Nice to meet you I
guess?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("A020430000_04_120");
MsgDisp("Nanatsumori","Really∋");
MsgDisp("主人公","Yeah.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("A020430000_04_130");
MsgDisp("Nanatsumori","......Hey, you.
What you saw here today,
forget about it?");
MsgDisp("主人公","You mean,
that you ate a lot of sweets?");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("A020430000_04_140");
MsgDisp("Nanatsumori","Not that!
The NANA thing!");
MsgDisp("主人公","NANA...? Ah!");
MsgDisp("主人公","That's it! I knew I'd seen you 
somewhere!
You're the high school model NANA!");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,4,1);
VoicePlay("A020430000_04_150");
MsgDisp("Nanatsumori","Shhh!
Too loud!");
MsgDisp("主人公","Ah, sorry......");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("A020430000_04_160");
MsgDisp("Nanatsumori","What the hell......
You didn't even notice......");
MsgDisp("主人公","I'm sorry?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("A020430000_04_170");
MsgDisp("Nanatsumori","It's worse if you apologize...
Realizing I just shot myself in the foot 
like an idiot.");
MsgDisp("主人公","｛七ツ森＊｝, is it possible
that you're keeping your model identity
a secret from people at school?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("A020430000_04_180");
MsgDisp("Nanatsumori","Yeah.
It's a peculiar job, I got a feeling
it'd mean trouble if I was discovered 
at school. ");
MsgDisp("主人公","I see.
Then, I'll keep it a secret, okay?");
ChEye(4,2);
ChMouth(4,0);
VoicePlay("A020430000_04_190");
MsgDisp("Nanatsumori","Rather than a secret,
I'd like you to forget about today.");
MsgDisp("主人公","That's impossible!
I can't forget......");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("A020430000_04_200");
MsgDisp("Nanatsumori","......You, you're the serious kind.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("A020430000_04_210");
MsgDisp("Nanatsumori","I guess I can't be a model, and be 
easily forgotten. That'd make no sense.");
MsgDisp("主人公","Haha!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("A020430000_04_220");
MsgDisp("Nanatsumori","You, what's your name?");
MsgDisp("主人公","｛主人公姓名｝.
See you in school, okay?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("A020430000_04_230");
MsgDisp("Nanatsumori","Okay.
Oh, and for saving me from losing my ID. 
Thank you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(4);
SEPlay("EV_SE_DOOR_014");
Wait(50,0);
MsgDisp("主人公","(Now that I think of it,
there's a famous modelling agency 
right aroung the corner, isn't there?)");
SEStop("EV_SE_DOOR_014",1);
MsgDisp("主人公","(｛七ツ森＊｝ probably does modelling 
jobs as NANA there.
Do your best, ｛七ツ森＊｝!)");
MsgClose();
ScrFadeOut(0);
