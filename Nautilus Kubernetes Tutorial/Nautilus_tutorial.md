# Nautilus Kubernetes Setup Tutorial 
#### By: Caleb
*Last updated 8/26/25*

Nautilus is an organization that offers free computing resources to research groups.

For general and high level access to computing resources, [Coder](https://nationalresearchplatform.org/documentation/userdocs/coder/coder/)  can be used. Coder offers premade templates and easy access to FPGAs. However, Kubernetes allows a much finer control over everything including individual storage control, ability to request specific amounts of resources, and persistent storage even after shutting down a server. Coder can also be used with Kubernetes, combining the best of both (tutorial [here](https://nationalresearchplatform.org/documentation/userdocs/coder/deploy/)). Familiarity with Kubernetes is strongly recommended.

If a full operating system is neccesary, ask the Nautilus admins about Virtual Machines. They are much slower than Deployments

**A warning**, do not try to set up the following in WSL; there are many issues with it. For Windows, running everything in Powershell works perfectly fine.

If you encounter any issues, contact me at ceravcal@uw.edu or the NRP admins at [Element](https://element.nrp-nautilus.io/#/room/#general:matrix.nrp-nautilus.io).

Before getting started read [these](https://nationalresearchplatform.org/documentation/userdocs/start/policies/) policies.


## **Downloading Server Controller**

This section covers setting up Kubectl on your computer. Kubectl is the way to setup and control server elements from your personal computer. A full tutorial is [here](https://nationalresearchplatform.org/documentation/userdocs/start/getting-started/#cluster-access-via-kubectl), however I will give a brief overview.

1. Download kubectl from the [Kubernetes release page](https://kubernetes.io/releases/download/#binaries)

2. Download this [config file](https://nationalresearchplatform.org/config),
and put it into your $HOME/.kube folder. 
If .kube doesn't exist, make it with mkdir ~/.kube

1. Now install [Kubelogin](https://github.com/int128/kubelogin?tab=readme-ov-file#setup)
(Your oidc-issuer-url is https://authentik.nrp-nautilus.io/application/o/k8s/).
    Your oidc-client-id should already be set up (I believe I found it in kubectl config view --raw if you can't find it)

1. Now run:
    ````
    kubectl get pods -n <YOUR NAMESPACE>
    (namespace is uw-acme if you are in Scott's UW lab)
    ````
    It should now open a webpage to authentiate
2. Finally, run: 
   
    ```
    kubectl config set contexts.nautilus.namespace <YOUR NAMESPACE>
    ```

## Next Steps
Now you should be all set up! For accessing servers already set up for you, this is all you need. For tutorials in setting up resources, look into the [Deployments](Deployments.md) and the Virtual Machine tutorials.

For any additional questions, I recommend looking at the [Nautilus](https://nrp.ai/documentation/) documentation, or the [Kubernetes](https://kubernetes.io/docs/home/) documentation. I recommend looking at Nautilus documentation first as you are directly using their resources, so anything they say goes. Kubernetes is a tool used by many in the industry so their documentation is more general. If you need a feature enabled, message a Nautilus admin on [Element](https://element.nrp-nautilus.io/#/room/#general:matrix.nrp-nautilus.io)